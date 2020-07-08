#include<bits/stdc++.h>
using namespace std;
class look_algo
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
    look_algo()
    {
        cout<<"----C-LOOK----"<<endl;
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
    void clook()
    {
        seektime=0;
                for(j=0;j<i;j++)
        {
            if(arr[j]<hpos)
                left.push_back(arr[j]);
            else
                right.push_back(arr[j]);
        }
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
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
        seektime+=abs(hpos-left[0]);
        hpos = left[0];
        // Now service the requests in left
        for(int i = 0; i < left.size(); i++)
        {
            cp = left[i];
            ss.push_back(cp);
            d = abs(cp - hpos);
            seektime += d;
            hpos= cp;
        }
        cout << "CLOOK seektime: "<< seektime << endl;
         for (int i = 0; i < ss.size(); i++)
        cout << ss[i] << endl;
    }
};
main()
{
    look_algo a;
    a.clook();
}
