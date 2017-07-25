public class rho
{
	static boolean e = false;
	public static void fun(int i)
	{
		for(int j = 0; j < 4 - i; j++)
			System.out.print(" ");
			    for(int k = 0; k < 2 * i + 1; k++)
					if(k == 2 * i)
					{
						if(i == 0 && e == true)
							System.out.print("*"); 
						else
							System.out.println("*");
					}
					else
					{
						if(i == 3 && k == 3)
							System.out.print("+");
						else
							System.out.print("*");
					}			
	}
	public static void main(String[] args) 
	{
		for(int i = 0; i < 3; i++)
		   fun(i);  
		e = true;
	    for(int i = 3; i >= 0; i--)
		   fun(i);
    }
}