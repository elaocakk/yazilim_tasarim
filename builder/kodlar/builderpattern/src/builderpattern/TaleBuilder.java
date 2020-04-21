package builderpattern;

public class TaleBuilder extends BookBuilder
{
    private Book _product = new Book();
	
	@Override
	public void buildIsim() {
		_product.setIsim("Dönüşüm");
	}

	@Override
	public void buildYazar() {
		_product.setYazar("Franz Kafka");
	}

	@Override
	public void buildSayfaSayisi() {
		_product.setSayfaSayisi("104");
	}

	@Override
	public void buildBasimYili() {
		_product.setBasimYili("2019");
	}

	@Override
	public void buildYayınEvi() {
		_product.setYayınEvi("Can Yayınları");
	}

	@Override
	public void buildKategori() {
		_product.setKategori("Hikaye");
	}

	@Override
	public void buildIsbn() {
		_product.setIsbn("9750719356");
	}

	@Override
	public Book getBook() {
		return _product;
	}
	
}

