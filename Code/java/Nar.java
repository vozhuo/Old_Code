public class nar
{
	public static void main(String[] args)
	{
		for(int i = 1; i < 10; i++)
			for(int j = 0; j < 10; j++)
				for(int k = 0; k < 10; k++)
					if(i * i * i + j * j * j + k * k * k == 100 * i + 10 * j + k)
						System.out.println(i * 100 + j * 10 + k); 
	}
}