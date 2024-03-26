import java.util.Scanner;
public class NCR {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int r=sc.nextInt();
        sc.close();
        if(n<0 || r<0){
            System.out.println("Not a valid number");
            return;
        }
        
        int c=comparison(n);
        int d=comparison(r);
        int e=comparison(n-r);
        int ncr=c/(d*e);
        System.out.println(ncr);
    }
    public static int comparison(int a) {
        int sum=1;
        for(int i=a;i>=1;i--)
        {
            sum=sum*i;

        }
        return sum;
        
    }
  
    
}
