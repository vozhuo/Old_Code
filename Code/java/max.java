import java.util.Scanner;
import java.util.Arrays;
public class max
{
	public static void main(String[] args)
	{
	   int [] a;
	   a = new int[10] ;
	   int k = 0;
       Scanner sc = new Scanner(System.in);
	   int n = sc.nextInt();
	   for(int i = n; i > 0; i /= 10)
            a[k++] = i % 10;
		Arrays.sort(a);
			System.out.print(a[a.length- 1]);
    }
}