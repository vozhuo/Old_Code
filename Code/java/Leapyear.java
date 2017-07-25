import java.util.Scanner;
public class Leapyear
{
	public static boolean Leapyear(int y)
	{
		if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) 
			return true;
		return false;
	}
	public static void main(String[] args)
	{
		 
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			int y = sc.nextInt();
			if(Leapyear(y))
				System.out.println("Yes"); 
			else
				System.out.println("No"); 
		}
	}
}