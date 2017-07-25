public class Prime 
{
	public static boolean primenum(int n)
	{
		int i;
		if(n == 2)
			return true;
		for(i = 2; i <= (int)Math.sqrt(n); i++)
			if(n % i == 0)
				break;
		if(i > (int)Math.sqrt(n))
			return true;
		else
			return false;
	}
	public static void main(String[] args)
	{
		for(int i = 2;i <= 100; i++)
		{
			if(primenum(i))
				System.out.println(i);
		}
	}
}