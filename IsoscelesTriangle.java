import java.util.Scanner;
public class IsoscelesTriangle {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            int k=n-i;
            for(int j=1;j<=k;j++)
            {
                System.out.print(" ");
            }
            for(int p=1;p<=i;p++)
            {
                System.out.print(p);
            }
            for(int m=i;m>=1;m--)
            if(m!=1)
            {
                System.out.print(m-1);
            }
            System.out.println();
        }
        sc.close();
    }
    
}
