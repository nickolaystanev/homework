//plane.add (grupa ot 1/2/)
// plane print seats zarti mesta kato randomvame za da zapulnem 
//mestata v smoleta, kato mestata trqbva da se zaplvat kakto govorihme v vhas
//kato zaeto mqsto e 1 prazno 0
//sushtata programa q pishe m i na ruby
import java.util.*; 
public class AirPlane{
	// print seats
	public void printSeats(int [][] seats){
        for (int k=0; k<=26;k++ ){
				for(int i =0; i <= 5; i++){
					System.out.print(seats[i][k]);
					if (i==2){
						System.out.print(" ");
						}
					}
			System.out.println(" ");
			}

	}   
	public void addSeats(int [][] seats){
		AirPlane plane=new AirPlane();
		int mesta =0;
		int colon =0;
		int roll=0;
		boolean found_seat = false;
		int random =  new Random().nextInt(3)+ 1;
		while(mesta<163){
			random = new Random().nextInt(3)+ 1;	
		// grupa ot 1
			if(random==1){
				for(colon=0;colon<27;colon++){
					for(roll=0; roll<6; roll++){
						if(seats[roll][colon]==0){
							seats[roll][colon]=1;
						}
					}
				}
				mesta+=1;			}
		// krai grupa ot 1
		// grupa ot 2
			if(random == 2){
				for(colon=0;colon<27;colon++){
					for(roll=0; roll<3; roll++){
						if((seats[roll*2][colon]==0)||(seats[roll*2+1][colon]==0)){
							seats[roll*2][colon]=1;
							seats[roll*2+1][colon]=1;
						}
					}
				}
				mesta+=2;
			}
			//krai grupa ot 2
			//grupa ot 3
			if(random == 3){
				for(colon=0;colon<27;colon++){
					roll=0;
					while(roll<6){
						if((seats[roll][colon]==0) || (seats[roll+1][colon]==0) || (seats[roll+2][colon]==0)){
							seats[roll][colon]=1;
							seats[roll+1][colon]=1;
							seats[roll+2][colon]=1;
						}
						roll=roll+3;
					}
				}
				mesta+=3;
			}
						//krai grupa ot 3
		}	
	
	}
	// krai print seats
	public int random_group(){
		int rvalue=new Random().nextInt(3)+ 1;		
		return rvalue;
	}
	
	public static void main(String[] args){
		AirPlane plane= new AirPlane();
		int [][] seats = new int [6][27];
		plane.printSeats(seats);
		plane.addSeats(seats);
		plane.printSeats(seats);
	}
}
