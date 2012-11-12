
import java.util.Random;

public class UsePlane {
	Gender[][] list = new Gender[6][27];
	public static final int max_seats=6*27;
	int current_seats=0;
	
	UsePlane() 
	{
		for(int collon=0;collon<27;collon++ )
		{
			for(int roll=0; roll<6; roll++){
				{
					list[roll][collon]= new Gender();
				}
			}
		}
	}
	public int RandomGroup(){
		Random generator = new Random();
		int random_number = generator.nextInt(3) + 1;		
		return random_number;
	}
	public void FillPlane(){
		UsePlane plane=new UsePlane();
		int random=plane.RandomGroup();
			while(current_seats<=max_seats)
			{
				random=plane.RandomGroup();
				if (random==1)
				{  // nachalo grupa 1
					System.out.println("tupak1");
					for(int collon=0;collon<27;collon++ )
					{
						for(int roll=0; roll<6; roll++)
						{
							if(list[roll][collon].getGender()!=null)
							{
								list[roll][collon].setGender();
								current_seats++;
								break;
							}
					}							
				}
			} // krai grupa 1
				if(random==2)
				{
					System.out.println("tupak2");
					boolean check_roll=false;
					for(int collon=0;collon<27;collon++ )
					{
						for(int roll=0; roll<2; roll++)
						{
							if((list[roll][collon].getGender()!="male") && (list[roll][collon].getGender()!="female") && (list[roll+1][collon].getGender()!="male") && (list[roll+1][collon].getGender()!="female"))
							{
								list[roll][collon].setGender();
								list[roll+1][collon].setGender();
								current_seats+=2;
								check_roll=true;
								break;
							}
						}
						if(check_roll==false)
						{
							for(int roll=3; roll<5; roll++)
							{
								if((list[roll][collon].getGender()!="male") && (list[roll][collon].getGender()!="female") && (list[roll+1][collon].getGender()!="male")&& (list[roll+1][collon].getGender()!="female"))
								{
									list[roll][collon].setGender();
									list[roll+1][collon].setGender();
									current_seats+=2;
									break;
								}
							}
						}
					}
				} // krai grupa 2
				if(random==3)
				{
					System.out.println("tupak3");
					boolean check_roll=false;
					for(int collon=0;collon<27;collon++ )
					{
						if((list[0][collon].getGender()!="male") && (list[0][collon].getGender()!="female") && (list[1][collon].getGender()!="male") && (list[1][collon].getGender()!="female") && (list[2][collon].getGender()!="male") && (list[2][collon].getGender()!="female"))
						{
							list[0][collon].setGender();
							list[1][collon].setGender();
							list[2][collon].setGender();
							check_roll=true;
							current_seats+=3;
							break;
						}
						if(check_roll==false)
						{
							if((list[3][collon].getGender()!="male") && (list[3][collon].getGender()!="female") && (list[4][collon].getGender()!="male") && (list[4][collon].getGender()!="female") && (list[5][collon].getGender()!="male") && (list[5][collon].getGender()!="female"))
							{
								list[3][collon].setGender();
								list[4][collon].setGender();
								list[5][collon].setGender();
								current_seats+=3;
								break;
							}
						}
					}
					
				}
				
			}
		}
		public void PrintSeats()
		{
	        for (int k=0; k<=26;k++ )
	        {
					for(int i =0; i <= 5; i++)
					{
						System.out.print(list[i][k].getGender());
						System.out.print("|");
						if (i==2)
						{
							System.out.print(" ");
						}
					}
				System.out.println(" ");
			}
		}
		
	}

