
public class functhrow {
  
      static void array()
      {
      try
      {
        int a[]={1,2,4,5};
        if(a[4]==0)
        {
            System.out.println("here");
        }
          throw new ArrayIndexOutOfBoundsException("array");
      
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
        System.out.println("Caught inside array func()");
        throw e;
        }
    }
        public static void main(String args[])
  {
                try{
                    array();

                }
                catch(ArrayIndexOutOfBoundsException e)
                {
                    System.out.println("Recaught"+e);
                }
  }  

}
