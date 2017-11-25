int main() {
  int amount,i,choice;
  int bn100=0,bn50=0,bn20=0,bn10=0,bn5=0,bn2=0,bn1=0;
  printf("Enter the amount of the money:");
  scanf("%d", &amount);
  do {

//100$
  for (i=0; amount>=100 ;i++)
  {
     amount=amount-100;
     bn100=bn100+1;

  } printf("%d Note(s) of 100.00$\n",bn100);
//50$
  for (i=0; amount>=50 ;i++)
  {
     amount=amount-50;
     bn50=bn50+1;

  } printf("%d Note(s) of 50.00$\n",bn50);
//20$
  for (i=0; amount>=20 ;i++)
  {
     amount=amount-20;
     bn20=bn20+1;

  } printf("%d Note(s) of 20.00$\n",bn20);
//10$
  for (i=0; amount>=10 ;i++)
  {
     amount=amount-10;
     bn10=bn10+1;

  } printf("%d Note(s) of 10.00$\n",bn10);
//5$
  for (i=0; amount>=5 ;i++)
  {
       amount=amount-5;
       bn5=bn5+1;

  } printf("%d Note(s) of 5.00$\n",bn5);
//2$
  for (i=0; amount>=2 ;i++)
  {
         amount=amount-2;
         bn2=bn2+1;

  } printf("%d Note(s) of 2.00$\n",bn2);
//1$
for (i=0; amount>=1 ;i++)
{
       amount=amount-1;
       bn1=bn1+1;

} printf("%d Note(s) of 1.00$\n",bn1);

    printf("You wanna continue?(1(Yes) or 0(No)");
    scanf("%d",&choice);

  }
  while(choice!=0)

  return 0;
}
