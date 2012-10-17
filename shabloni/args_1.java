import java.util.Arrays;

public class args_1 {
	public static void main(String args[]){
		if((args[args.length-1]).equals("down")){
			Arrays.sort(args);	
			for (int i=args.length-1; i>=0; i--){
			if(System.getProperty(args[i])!= null){
				System.out.println(System.getProperty(args[i]));
				}
			else System.out.println(args[i]);
			}
			
		}
		else{
			Arrays.sort(args);	
			for (int i=0; i<=args.length-1; i++){
			if(System.getProperty(args[i])!= null){
				System.out.println(System.getProperty(args[i]));
				}
			else System.out.println(args[i]);
			}
		}	
	}

}
