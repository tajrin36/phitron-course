int x,v;
    scanf("%d %d",&x,&v);
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            arr[i] = v;
        }
        printf("%d ",arr[i]);
    }