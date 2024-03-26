class Peak {
    public static void main(String[] args) {
        int a[]={2,3,1,4,2};
        int n=a.length;
        
        for(int i=0;i<n;i++)
        {
            if((a[i]>a[i+1])&&a[i]>a[i-1])
            {
                int peak=a[i];
                System.out.println(peak);
                break;
            }
            else
            {
            break;
        }
        
    }
    
}
}
