#include<bits/stdc++.h>
using namespace std;
class scan_algo
{
    private:
    int i,j,hpos;
    string dir;
    int arr[20];
    int dsize=200;
    int d, cp, seektime, head;
    vector<int> left, right;
    vector<int> ss;
    public:
    scan_algo()
    {
        cout<<"enter initial head position\n";
        cin>>hpos;
        i=0;
        cout<<"enter sequence with space and press enter when completed: ";
        do
        {
            cin>>arr[i++];
        }while(cin.peek()!='\n');
        cout<<i<<endl;
    }
    void push()
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]<hpos)
                left.push_back(arr[j]);
            else
                right.push_back(arr[j]);
        }
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
    }
    void display()
    {
        for (int i = 0; i < ss.size(); i++)
        cout << ss[i] << endl;
    }
    void scan()
    {
        seektime=0;
        cout<<"direction: "<<dir;
        cin>>dir;
        if(dir=="left")
            left.push_back(0);
        else
            right.push_back(dsize-1);
        push();
        for(int t=1;t<=2;t++)
        {
            if(dir=="right")
            {
               for(int j=0;j<right.size();j++)
               {
                   cp=right[j];
                   ss.push_back(cp);
                   d=abs(cp-hpos);
                   seektime+=d;
                   hpos=cp;
               }
                dir="left";
            }
           else if(dir=="left")
            {
                for(int j=left.size()-1;j>=0;j--)
               {
                   cp=left[j];
                   ss.push_back(cp);
                   d=abs(cp-hpos);
                   seektime+=d;
                   hpos=cp;
               }
                dir="right";
            }
        }
        cout<<"SCAN Seektime : "<<seektime<<endl;
        display();
    }
    void cscan()
    {
        seektime=0;
        left.push_back(0);
        right.push_back(dsize-1);
        push();
        //servicing requests in right side
        for (int i = 0; i < right.size(); i++)
        {
        cp = right[i];
        ss.push_back(cp);
        d = abs(cp - hpos);
        seektime += d;
        hpos= cp;
        }
        cout<<endl;
    //right side service id finished
    hpos = 0;
    // Now service the requests in left
    for (int i = 0; i < left.size(); i++) {
        cp = left[i];
        ss.push_back(cp);
        d = abs(cp - hpos);
        seektime += d;
        hpos= cp;
    }
    cout << "CSCAN seektime: "<< seektime << endl;
    display();
    }
};
main()
{
    scan_algo a;
    //a.scan();
    a.cscan();
}
