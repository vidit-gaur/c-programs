struct num
{
unsigned n:1;
};
main()
{
int no; struct num x;
printf("%d",&no);
x.n=no;
if(x.n)
printf("%d is odd",no);
else
printf("%d is even,no);
}
