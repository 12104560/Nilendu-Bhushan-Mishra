import java.util.Scanner;
public class NumberStarPattern {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            //int k=1;
            for(int j=n;j>=1;j--)
            {
                if(j==i){
                System.out.print("*");
               // k++;
            }
            else{
                System.out.print(j);
            }
        }
        System.out.println();
        sc.close();
    }
    
}
}
