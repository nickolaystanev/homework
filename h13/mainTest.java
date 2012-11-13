
public class mainTest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Gender person=new Gender();
		person.setGender();
		Gender lina = new Gender();
		System.out.println(lina.getGender());
		lina.setGender();
		System.out.println(lina.getGender());
		System.out.println(person.getGender());
		UsePlane plane= new UsePlane();
		plane.PrintSeats();
		plane.FillPlane();
		plane.PrintSeats();
		System.out.println("tupak");
	}

}
