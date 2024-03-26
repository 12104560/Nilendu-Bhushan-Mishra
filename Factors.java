import java.util.Scanner;
public class Factors {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int flag=0;
        int n=sc.nextInt();
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                System.out.print(i);
            

            }
            

        }
        if(flag==0)
        {
            System.out.println(-1);
        }
        sc.close();
    }
    
}
