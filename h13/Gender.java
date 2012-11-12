
import java.util.Random;
public class Gender {
	private
	String gender;
	
	public void setGender() {
		Random generator = new Random();
		int random_gender = generator.nextInt(2) + 1;
		if(random_gender == 1){
			this.gender = "male";
		}
		else{
			this.gender = "female";
		}
	}
	
	public String getGender() {
		return gender;
	}
	
}
