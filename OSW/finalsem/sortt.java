public class sortt
{
    public static void main(String args[])
    {
        int arr1[]={2,3,4,5};
        int arr2[]={6,10,11,13,17,19,23};
        int k=8;
        int a=0,b=0;
        int n=0;
        
       for(int i=0;i<k;i++)
       {
        
        
        if(arr1[a]<arr2[b])
        {
            a++;
            n=arr1[a-1];
            


        }
        else {
            b++;
            n=arr2[b-1];
            
        }


       }
       
       System.out.println(n);
       

    }
}