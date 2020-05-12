package iterator;

import java.util.ArrayList; 

public class GezilecekSehirler implements Container {
	public ArrayList<String> sehirlistesi = new ArrayList<String>();
	
   @Override
   public Iterator iterator() {
      return new GezilecekSehirIterator();
   }
   
   public void sehirlerEkle() {
	   sehirlistesi.add("Kocaeli");
	   sehirlistesi.add("İstanbul");
	   sehirlistesi.add("İzmir");
	   sehirlistesi.add("Muğla");
	   sehirlistesi.add("Antalya");
	   sehirlistesi.add("Ankara");
	   sehirlistesi.add("Bolu");
	   sehirlistesi.add("Edirne");
	   sehirlistesi.add("Kars");
	   sehirlistesi.add("Kars");
   }
	   
   private class GezilecekSehirIterator implements Iterator {
	      private int index;

	      @Override
	      public boolean sonrakiVarMi() {
	    	 if(index < sehirlistesi.size()){
	            return true;
	         }
	         return false;
	      }

	      @Override
	      public Object sehir() {
	         if(this.sonrakiVarMi()){
	        	String isim = sehirlistesi.get(index++);
	        	Sehir sehir=new Sehir(isim);
	        	
	            return sehir;
	         }
	         return null;
	      }

		@Override
		public boolean sehirlerGezildiMi() {
			if(index < sehirlistesi.size()){
				 return false;
		     } else if (index == sehirlistesi.size() ) {    
		    	 return true;
		     }
			 return false;
		}		
		
   }
   
}
