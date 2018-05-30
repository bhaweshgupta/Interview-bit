int Solution::maxSubArray(const vector<int> &A)
{
    int Max=INT_MIN;
    int Curr=0;
    for(int i=0;i<A.size();i++)
    {
        Curr=Curr+A[i];

        if(Max<Curr)
        {
            Max=Curr;
        }
         if(Curr<0)
        {
            Curr=0;
        }

    }
    return Max;



}

