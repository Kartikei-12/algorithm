
#ifndef smallSize
#define smallSize 3
#endif 
typedef long double ld;
namespace my_namespace
{
    //Class to manage points 
    class Pair
    {
    public:
        int x, y;
        Pair(int a, int b)
        {
            x=a;
            y=b;
        }
    };
    typedef std::vector<Pair> vecP;
    //Some Utility Functions
    ld distance(const Pair a, const Pair b)
    {
        return sqrt( (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) );
    }
    bool sortByx(const Pair a, const Pair b)
    {
        return (a.x<b.x)?true:false;
    }
    bool sortByy(const Pair a, const Pair b)
    {
        return (a.y<b.y)?true:false;
    }

    ld stripClosest(vecP &strip, ld d)
    {
        ld min = d;
        size_t size=strip.size();
        for(size_t i=0; i<size; ++i)
            for(size_t j=i+1; j<size && (strip[j].y-strip[i].y)<min; ++j)
                if(distance(strip[i], strip[j]) < min)
                    min = distance(strip[i], strip[j]);
        return min;
    }

    ld closestUntil(vecP Px, vecP Py, size_t n)
    {
        ld dist = distance(Px.at(0), Px.at(1));

        //If small number of elements than brute force is faster
        if(n <= smallSize)
        {
            for(size_t i=0; i<(n-1); ++i)
                for(size_t j=i+1; j<(n-1); ++j)
                    if( dist > distance(Px[i], Px[j]) )
                        dist = distance(Px[i], Px[j]);
            return dist;
        }

        size_t mid = n/2;
        Pair midPair = Px.at(mid);

        vecP Pyl(Py.begin(), Py.begin()+mid), Pyr(Py.begin()+mid, Py.end()), temp(Px.begin()+mid, Px.end());
        ld dl = closestUntil(Px, Pyl, mid);
        ld dr = closestUntil(temp, Pyr, n-mid);

        ld d = (dl<dr)?dl:dr;

        vecP strip;
        strip.reserve(n);

        for(size_t i=0; i<n; ++i)
            if(std::abs(Px.at(i).x - midPair.x) < d)
                strip.push_back(Px.at(i));

        ld a = stripClosest(strip, d);
        return (d<a)?d:a;
    }

    inline ld cloestDist(vecP pairList)
    {
        vecP Px(pairList.begin(), pairList.end()), Py(pairList.begin(), pairList.end());
        std::sort(Px.begin(), Px.end(), sortByx);
        std::sort(Py.begin(), Py.end(), sortByy);

        return closestUntil(Px ,Py, Px.size());
    }
}