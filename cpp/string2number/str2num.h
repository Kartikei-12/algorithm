//String to numerical converter, equivalent of float() from python
namespace my_namespace
{
    //Small function to calculate 10^a.
    int64_t power(int a)
    {
        int64_t ans=1;
        for(int i=0; i<a; ++i)
            ans *= 10;
        return ans;
    }
    
    long double str2num(std::string original)
    {
        std::string ValueError = "ValueError.\nNote:str2num cannot perform arithematic operation internally.";
        bool isDecimal=false, isNegative=false;
        long double ans=0.0;
        std::string intPart, floatPart;
        
        if(original.at(0) == '-')//Striping - sign
        {
            isNegative=true;
            original.assign(original.begin()+1, original.end());
        }
        
        //Checking for correctness of string
        for(int i=0; i<original.size(); ++i)
        {
            int a = original.at(i);
            if(((a<48 || a>57) && a!=46) || (isDecimal && a==46))
                throw ValueError;
            if(a==46)
                isDecimal=true;
        }

        //Building dictionary for refencing numbers from
        std::map<char, int> charDict;
        for(int i=0; i<10; ++i)
            charDict[(char )('1'+i)] = i+1;
        
        //Splitting integer part and fractional part
        if(std::string::npos != original.find('.'))
        {
            intPart.assign(original.begin(), original.begin()+original.find('.'));    
            floatPart.assign(original.begin()+original.find('.')+1, original.end());
        }
        else
            intPart.assign(original.begin(), original.end());

        //Building integer part    
        for(int i=0; i<intPart.size(); ++i)
            ans = (ans*10.0) + charDict[(char )intPart.at(i)] * 1.0;
        
        //Building floating point part
        for(int i=0; i<floatPart.size(); ++i)
            ans += charDict[floatPart.at(i)]*1.0/power(i+1);
        
        //Making number nagative if required 
        if(isNegative)
            ans *= -1;

        return ans;
    }
}