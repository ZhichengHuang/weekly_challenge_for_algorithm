class Car{
    public:
    int position;
    double time;
    Car(int p,double t)
    {
        position=p;
        time=t;
    }
};
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int N = position.size();
        vector<Car> cars;
        for(int i=0;i<N;++i)
        {
            cars.push_back(Car(position[i],(target-position[i])/(speed[i]*1.0)));
        }
    sort(cars.begin(),cars.end(),[](Car a, Car b) { return a.position < b.position; });

    int ans = 0,t=N-1;
    while(t>0)
    {
        
        if(cars[t].time <cars[t-1].time) ans++;
        else cars[t-1]=cars[t];
        t--;
        
    }
    return ans+(t == 0 ? 1 : 0);
    }
};