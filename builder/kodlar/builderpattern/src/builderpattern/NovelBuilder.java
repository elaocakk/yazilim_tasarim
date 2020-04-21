package builderpattern;

public class NovelBuilder extends BookBuilder
{
    private Book _product = new Book();
	
	@Override
	public void buildIsim() {
		_product.setIsim("Tutanamayanlar");
	}

	@Override
	public void buildYazar() {
		_product.setYazar("Oğuz Atay");
	}

	@Override
	public void buildSayfaSayisi() {
		_product.setSayfaSayisi("724");
	}

	@Override
	public void buildBasimYili() {
		_product.setBasimYili("2000");
	}

	@Override
	public void buildYayınEvi() {
		_product.setYayınEvi("İletişim Yayıncılık");
	}

	@Override
	public void buildKategori() {
		_product.setKategori("Roman");
	}

	@Override
	public void buildIsbn() {
		_product.setIsbn("9754700114");
	}

	@Override
	public Book getBook() {
		return _product;
	}
	
}
