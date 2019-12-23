/*Atrod mazāko veselo skaitli*/
int min(int v1, int v2)
{
 return v1<=v2 ? v1 : v2;
}

/*Atrod lielāko kopīgo dalītāju*/
int dal(int v1, int v2)
{
 int temp;
 while(v2)
 {
  temp=v2; v2=v1%v2; v1=temp;
 }
 return v1;
}
