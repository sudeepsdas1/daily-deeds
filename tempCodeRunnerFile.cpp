   vector<int> v={1,2,3,4,5};
    vector<int>:: iterator it = v.begin();
    for (it = v.begin(); it <v.end(); it++)
    {
        cout<<(*it)<<endl;
    }