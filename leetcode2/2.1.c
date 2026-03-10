struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum1=0;
    int sum2=0;
    int sum=0;
    int l1len = sizeof(l1[])/sizeof(l1[0]);
    for(int i=0;i<=l1len;i++){
        int l1num = l1[i]*pow(10,i);
        sum1+=l1num;}
        int l2len = sizeof(l2[])/sizeof(l2[0]);
    for(int x=0;x<=l2len;x++){
        int l2num = l2[x]*pow(10,x);
        sum2+=l2num;}
    sum=sum1+sum2;
    int valnum = sum;
    int val[];
    int vallen=0
    if(sum>0){
        while(sum>10){
            sum=sum/10;
            vallen++;
        }
    }
    else{
        printf("[0]");
        return [0];
    }
    for(n=1;n<=vallen;n++){
        int a = valnum%pow(10,n)/pow(10,n-1);
        val[n-1]=a;
    }
    printf(val[])
}