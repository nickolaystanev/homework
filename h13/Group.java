
import java.util.Random;
public class Group {
	public int RandomGroup(){
		Random generator = new Random();
		int random_number = generator.nextInt(3) + 1;		
		return random_number;
	}
	public Gender[] CreateGroup(){
		int random=RandomGroup();
		Gender[] array;
		array = new Gender[random];
		for(int i=0 ; i<random; i++){
			array[i].setGender();
		}
		return array;
		
	}
	
}
