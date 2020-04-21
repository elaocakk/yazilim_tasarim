package builderpattern;

public class BiographyBuilder  extends BookBuilder
{
    private Book _product = new Book();
	
	@Override
	public void buildIsim() {
		_product.setIsim("Einstein - Yaşamı ve Evreni");
	}

	@Override
	public void buildYazar() {
		_product.setYazar("Walter Isaacson");
	}

	@Override
	public void buildSayfaSayisi() {
		_product.setSayfaSayisi("679");
	}

	@Override
	public void buildBasimYili() {
		_product.setBasimYili("2010");
	}

	@Override
	public void buildYayınEvi() {
		_product.setYayınEvi("Tudem Yayınevi");
	}

	@Override
	public void buildKategori() {
		_product.setKategori("Biyografi");
	}

	@Override
	public void buildIsbn() {
		_product.setIsbn("9944693042");
	}

	@Override
	public Book getBook() {
		return _product;
	}
	
}

