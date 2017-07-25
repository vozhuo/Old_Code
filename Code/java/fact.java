public class fact
{
	public static void main(String[] args)
	{
       long sum = 0, fac = 1;
       for(int i = 1; i <= 20; i++)
	   {
			fac *= i;
			sum += fac;
       }
       System.out.println(sum);
    }
}