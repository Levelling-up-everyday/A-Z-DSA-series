//TC:O(n) SC:O(1)
int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}


//TC:O(1) SC:O(1)
int count_digits( int n )
{
  string x = to_string(n);
  return x.length(); 
}
