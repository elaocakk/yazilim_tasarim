package iterator;

public class Main {
	
	public static void main(String[] args) {
		  
	      GezilecekSehirler gezilecek = new GezilecekSehirler();
	      gezilecek.sehirlerEkle();
	      
	      System.out.println("Gezinme islemi baslasin\n");
	      
	      Iterator iterator = gezilecek.iterator();
	      
	      while (iterator.sonrakiVarMi()) {
	    	  Sehir s1 = (Sehir)iterator.sehir();
 	          System.out.println("Gezilen sehir adi : " + s1.getIsim());
 	          
 	          if(!iterator.sehirlerGezildiMi()) {
 	        	 System.out.println("Gezinme islemi tamamlanmadi\n");
 	          }else {
 	        	 System.out.println("Gezinme islemi tamamlandi\n");
 	          }
 	          
	      }      
	      
	}
}
