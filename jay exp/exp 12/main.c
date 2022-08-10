int main()
{
    int i,n;
    float num[10],sum,sumsquare,mean,variance,deviation;
    sum=0;sumsquare=0;n=0;
    printf("JAY BANKOTI - 121A8022\n");
    printf("number of element:");
    scanf("%d",&n);
    printf("input %d values \n",n);
    for(i=0;i<n;i++)
{
    scanf("%f",&num[i]);
    sum+=num[i];
}
mean=sum/(float)n;
printf("mean is: %f\n",mean);
for(i=0;i<n;i++)
{
    deviation=num[i]-mean;
    sumsquare+=deviation*deviation;
}
variance=sumsquare/n;
printf("variance is: %f",variance);


    return 0;
}
