package builderpattern;

public class Book
{
	//zorunlu
	 private String isim; 
	 private String yazar; 
	 
	//optional
	 private String sayfaSayisi; 
	 private String basimYili;
	 private String yayınEvi;
	 private String kategori; 
	 private String isbn; 
	 
	 public Book() { }

		public String getIsim() {
			return isim;
		}

		public void setIsim(String isim) {
			this.isim = isim;
		}

		public String getYazar() {
			return yazar;
		}

		public void setYazar(String yazar) {
			this.yazar = yazar;
		}

		public String getSayfaSayisi() {
			return sayfaSayisi;
		}

		public void setSayfaSayisi(String sayfaSayisi) {
			this.sayfaSayisi = sayfaSayisi;
		}

		public String getBasimYili() {
			return basimYili;
		}

		public void setBasimYili(String basimYili) {
			this.basimYili = basimYili;
		}

		public String getYayınEvi() {
			return yayınEvi;
		}

		public void setYayınEvi(String yayınEvi) {
			this.yayınEvi = yayınEvi;
		}

		public String getKategori() {
			return kategori;
		}

		public void setKategori(String kategori) {
			this.kategori = kategori;
		}

		public String getIsbn() {
			return isbn;
		}

		public void setIsbn(String isbn) {
			this.isbn = isbn;
		}
		
		public String getOrnek() {
	    	String instance = "Kitap: "+this.isim+", "+this.yazar+", "+this.sayfaSayisi+", "+this.basimYili+", "
	            +this.yayınEvi+", "+this.kategori+", "+this.isbn+"\n ";
	    
	    	return instance;
	    }
}
