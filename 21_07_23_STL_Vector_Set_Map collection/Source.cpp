#include<iostream>
#include<vector>

#include<set>
#include<map>

#include<algorithm>

/*
Есть хранилище вектор и нужно смоделировать большой набор
1) зарезервируем сразу место в 10000 элементов под набор
*/
//int main()
//{
//
//	std::vector<int> data;// std::vector<int> data(10000);- разница в том что эти элементы будут сразу созданны
//	// std::vector<int> data{20, 5, 45,98,98,7,8,}; // Количество в коллекции стало 7 элементов
//	//data.push_back(067); // Закинет 67 чисел восьмиричной системе
//	
//
//	data.reserve(10000000);// А тут мы зарание забили за Вектором (vector) нужное количество памяти
//
//	for (size_t i = 0; i < data.capacity(); ++i)// Метод size_t чтобы он сразу 
//	{
//		data.emplace_back(::rand() % 1000000);// Нужны случайные числа в большом количестве rand - выдает только 32000 элементов (Будет много повторений)
//	}
//
//	//emplace_back - Создает новый объект на основе входных данных (Работает с самим аргументом, БЕЗ КОПИЙ)
//	// push_back - принимает ссылки ужи сформированных объектов коллекции ( Работает с копиями и создает копии)
//
//	// цикл прохода по массиву - Анализируем шаги (Сложностьвыполнения действия О(n)
//	// В ХОДЕ прохода цикла будет цикл поиска повторений Анализируем шаги (Сложностьвыполнения действия О(n)
//	// в сумме сложность получаем (n)*(n)
//	// изменение счетчика уникальных элементов
//
//
//	// цикл прохода по массиву
//
//	std::set<int> uniq_elements;
//	for (size_t i = 0; i < data.size(); ++i)
//	{
//		uniq_elements.insert(data[i]);
//	}
//
//	//for (auto& el : data) uniq_elements.insert();
//
//	// // 1 выводим SET ( СКОРОСТЬ БЫСТРАЯ)
//	std::cout <<data.size() << " All data\n" << std::endl;
//	std::cout <<uniq_elements.size() <<" different data\n" << std::endl;
//
//
//	// Следующий этап // В ХОДЕ прохода цикла будет цикл поиска повторений
//
//	
//
//	std::vector<int>uniq_data;
//	for (auto& el : data)
//	{
//		auto find = std::find(uniq_data.end(), uniq_data.end(), el);
//		if (find == uniq_data.end())
//		{
//			uniq_data.push_back(el);
//		}
//	}// n(n+n)
//
//	//// 1 выводим Вектор ( СКОРОСТЬ МЕДЛЕННАЯ)
//	// Разница между двумя вывл=одами по времини
//	std::cout << '\n';
//	std::cout << data.size() << " all data\n" << uniq_elements.size() << " different data\n";
//		
//
//	return 0;
//}

// ЗАДАЧА НА ПЕРЕСЕЧЕНИЕ МНОЖЕСТВ 


//int main()
//{
//
//	std::vector<int> data;// std::vector<int> data(10000);- разница в том что эти элементы будут сразу созданны
//	// std::vector<int> data{20, 5, 45,98,98,7,8,}; // Количество в коллекции стало 7 элементов
//	//data.push_back(067); // Закинет 67 чисел восьмиричной системе
//
//
//	data.reserve(10000);// А тут мы зарание забили за Вектором (vector) нужное количество памяти
//
//	for (size_t i = 0; i < data.capacity(); ++i)// Метод size_t чтобы он сразу 
//	{
//		data.emplace_back(::rand() % 10000);// Нужны случайные числа в большом количестве rand - выдает только 32000 элементов (Будет много повторений)
//	}
//
//	//emplace_back - Создает новый объект на основе входных данных (Работает с самим аргументом, БЕЗ КОПИЙ)
//	// push_back - принимает ссылки ужи сформированных объектов коллекции ( Работает с копиями и создает копии)
//
//	// цикл прохода по массиву - Анализируем шаги (Сложностьвыполнения действия О(n)
//	// В ХОДЕ прохода цикла будет цикл поиска повторений Анализируем шаги (Сложностьвыполнения действия О(n)
//	// в сумме сложность получаем (n)*(n)
//	// изменение счетчика уникальных элементов
//
//
//	// цикл прохода по массиву
//
//	std::set<int> uniq_elements;
//	for (size_t i = 0; i < data.size(); ++i)
//	{
//		uniq_elements.insert(data[i]);
//	}
//
//	//for (auto& el : data) uniq_elements.insert();
//
//	// // 1 выводим SET ( СКОРОСТЬ БЫСТРАЯ)
//	std::cout << data.size() << " All data\n" << std::endl;
//	std::cout << uniq_elements.size() << " different data\n" << std::endl;
//
//
//	// Следующий этап // В ХОДЕ прохода цикла будет цикл поиска повторений
//
//
//
//	//std::vector<int>uniq_data;
//	//for (auto& el : data)
//	//{
//	//	auto find = std::find(uniq_data.end(), uniq_data.end(), el);
//	//	if (find == uniq_data.end())
//	//	{
//	//		uniq_data.push_back(el);
//	//	}
//	//}// n(n+n)
//
//	//// 1 выводим Вектор ( СКОРОСТЬ МЕДЛЕННАЯ)
//	// Разница между двумя вывл=одами по времини
//	/*std::cout << '\n';
//	std::cout << data.size() << " all data\n" << uniq_elements.size() << " different data\n";*/
//
//
//	std::vector<int>data_other;
//	data.reserve(10'000);
//	for (size_t i = 0; i < data_other.capacity(); ++i)
//	{
//		data_other.emplace_back(-5000 + ::rand() % 10000);
//	}
//
//	std::set<int> uniq_element_other;
//	for (size_t i = 0; i < data_other.capacity(); ++i)
//	{
//		uniq_element_other.insert(data_other[i]);
//	}
//	std::cout << '\n';
//	std::cout << data_other.size() << " all data\n" << uniq_element_other.size() << " different data\n";
//
//
//	//// std::back_inserter(result) функтор когда надо заносить что то в результат они добавляют занчение (Это как перегрузка () )
//	//std::vector<int>result;
//	//std::set_intersection(uniq_elements.begin(), uniq_elements.end(), uniq_element_other.begin(), uniq_element_other.end(), std::back_inserter(result));
//	//	// Сначало перебираем 1 коллекцию uniq_elements Затем вторую коллекцию uniq_element_other и вставляеэ это в третью коллекцию result
//
//	//std::cout << '\n';
//	//std::cout << result.size() << " insekter volum\n";
//
//
//	return 0;
//}

// Обработка MAP
/*
Фамилия + Имя + Дата рождения - Берем 3 элемента и при соединении их они дают уникальное значение. А по отдельности Это не уникальные элементы
*/
struct Record
{
	int id;
	std::string name;
	double vage;
	// ЭТО СЧИТАЕТСЯ ДУРНЫМ КОДОМ ( Так будем провоцировать не предвиденное поведение)
	bool operator<(const Record& obj) const
	{
		return id < obj.id;
	}
	// Используем АнордерИТСет. (Должен искаться метод ХЭШЬ класса -  Это расширение стандаортной бииблиотеки) 
	// Перегружаем оператор == 

	// Убедимся что тип данных сответсвует 
	bool operator==(const Record& obj) const {
		return id == obj.id && name == obj.name && vage == obj.vage;// vage == obj.vage - сравнение чисел
	}

};

// Пишем ХЭШ функцию чтобы для своего класса опрел=делить правила работы
namespace std {

	template<>

	struct hash<Record>	{
		size_t operator()(const Record& obj) const{
			// взять хэш функцию от первого поля
			// сдвинуть реультат на 1 бит в лево
			//взять хэш функцию от второго поля
			// побитовое "исключающие или" между результатом и последней хэш функцией


			using std::size_t;
			using std::hash;
			return ( (hash<int>()(obj.id)) ^
				(hash<std::string>()(obj.name) << 1) ^
				(hash<double>()(obj.vage)) << 1
				);
		}
	};
}
// Думаем как создать коллекцию 1) Надо определиться для МАП что должно быть ключем??
// Если надо искать количество имен с определенной численностью то ключом делаем ИМЯ. И по нему находим данные
// SET и MAP  - Это инструменты поиска и сортировки ( Когда работаем с результатами то удобно MAP Это по нужному параметру находим объект)

void F00() {
	std::set<Record> coll;
	coll.insert(Record());// - это отдельно работать не будет Т.К неопределе знак > чтобы он заработал надо написать bool operator<()
	std::map<int, Record> coll2;
	Record a{ 1,"Ivan", 12434.7 };
	//coll2.insert({ a.id, a });// Сейчас пишем так 
	 coll2.insert(std::pair<int, Record>( a.id, a )); //Так писали в Студио до 14 года. С 14 
}


int main()
{

	std::vector<int> data;// std::vector<int> data(10000);- разница в том что эти элементы будут сразу созданны
	// std::vector<int> data{20, 5, 45,98,98,7,8,}; // Количество в коллекции стало 7 элементов
	//data.push_back(067); // Закинет 67 чисел восьмиричной системе


	data.reserve(10'000);// А тут мы зарание забили за Вектором (vector) нужное количество памяти

	for (size_t i = 0; i < data.capacity(); ++i)// Метод size_t чтобы он сразу 
	{
		data.emplace_back(::rand() % 10000);// Нужны случайные числа в большом количестве rand - выдает только 32000 элементов (Будет много повторений)
	}

	//emplace_back - Создает новый объект на основе входных данных (Работает с самим аргументом, БЕЗ КОПИЙ)
	// push_back - принимает ссылки ужи сформированных объектов коллекции ( Работает с копиями и создает копии)

	// цикл прохода по массиву - Анализируем шаги (Сложностьвыполнения действия О(n)
	// В ХОДЕ прохода цикла будет цикл поиска повторений Анализируем шаги (Сложностьвыполнения действия О(n)
	// в сумме сложность получаем (n)*(n)
	// изменение счетчика уникальных элементов


	// цикл прохода по массиву

	std::set<int> uniq_elements;
	for (size_t i = 0; i < data.capacity(); ++i)
	{
		uniq_elements.insert(data[i]);
	}

	//for (auto& el : data) uniq_elements.insert();

	// // 1 выводим SET ( СКОРОСТЬ БЫСТРАЯ)
	std::cout << data.size() << " All data\n" << std::endl;
	std::cout << uniq_elements.size() << " different data\n" << std::endl;


	// Следующий этап // В ХОДЕ прохода цикла будет цикл поиска повторений



	std::vector<int>uniq_data;
	for (auto& el : data)
	{
		auto find = std::find(uniq_data.end(), uniq_data.end(), el);
		if (find == uniq_data.end())
		{
			uniq_data.push_back(el);
		}
	}// n(n+n)

	// 1 выводим Вектор ( СКОРОСТЬ МЕДЛЕННАЯ)
	// Разница между двумя вывл=одами по времини
	std::cout << '\n';
	std::cout << data.size() << " all data\n" << uniq_elements.size() << " different data\n";


	std::vector<int>data_other;
	data_other.reserve(10'000);
	for (size_t i = 0; i < data_other.capacity(); ++i)
	{
		data_other.emplace_back(-5000 + ::rand() % 10000);
	}

	std::set<int> uniq_element_other;
	for (size_t i = 0; i < data_other.capacity(); ++i)
	{
		uniq_element_other.insert(data_other[i]);
	}
	std::cout << '\n';
	std::cout << data_other.size() << " all data\n" << uniq_element_other.size() << " different data\n";


	// std::back_inserter(result) функтор когда надо заносить что то в результат они добавляют занчение (Это как перегрузка () )
	std::vector<int>result;
	std::set_intersection(uniq_elements.begin(), uniq_elements.end(), uniq_element_other.begin(), uniq_element_other.end(), std::back_inserter(result));
		// Сначало перебираем 1 коллекцию uniq_elements Затем вторую коллекцию uniq_element_other и вставляеэ это в третью коллекцию result

	std::cout << '\n';
	std::cout << result.size() << " insekter volum\n";


	return 0;
}