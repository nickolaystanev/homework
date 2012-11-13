import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;
// link na wikito http://nikistanev.wikispaces.com/home
class Ptotoype{
	public int get_x(){
		int x=0;
		boolean check=false;
		Scanner scan = new Scanner(System.in);
		x=scan.nextInt();
		while(check!=true){
			if (0>x || x>10){
				System.out.println("vuvedi 0<x<10");
				x=scan.nextInt();
			}
			else check=true;
		}
		return x;
	}
	public boolean check_simple(int i){
		
		boolean check_simple=true;
		for(int k=2 ; k<i; k++){
			if((i % k)==0){
				check_simple=false;
			}
		}
		return check_simple;
	}
	public boolean check_odd(int i){		
		boolean check_odd=true;
		if((i % 2)==0){
			check_odd=false;
		}
		else check_odd=true;

		return check_odd;
	}	
	public void print_array(int[] array){
		for(int i =0; i<10; i++){
			System.out.println(array[i]);
		}
	
	}
	public int get_random(){
		int random=0;
		random = new Random().nextInt(3)+ 1; //nextInt(chislo)- chislata ot 0 do chislo,sled + e ot koe pochva	
		return random;
	}
	public void sort_array(int[] array){
		Arrays.sort(array);  //v skobite ime, ime[ot],ime[do]
	}
	public double cos_x(int degree){
		double angle=Math.cos(Math.toRadians(30));// respektivno menkam cos sus sin kato chislata sa gradusite
		return angle;
	}

	public static void main(String[] args){
		Ptotoype object= new Ptotoype();
		int [] array = new int [10];
		x=work.get_x();
		
	}

}