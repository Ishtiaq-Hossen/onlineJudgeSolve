void mystery(int list[],int length)
{
    for(int i=1;i<length;i++){
        list[i]=list[i]+list[i-1];
    }
}

/*
{8}
{6,9}
{2,6,12}
{1,3,6,10}
{7,10,12,12,17}
*/