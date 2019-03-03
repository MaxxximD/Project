//Пользователь вводит два числа. Найти и вывести максимальное из двух чисел. Кажется просто, но есть подводные камни
function MaxOfNumb(a, b)
{
if (a > b)
	alert('Максимальное из двух чисел: ' + a);
else 
	alert('Максимальное из двух чисел: ' + b);


}

//Написать функцию, принимающую массив и возвращающую отфильтрованный массив (только положительные числа, только числа, только строковые элементы (string))
function FiltArr(arr)
{
 alert('Варианты фильтрации массива: 1)только положительные числа; 2)только числа; 3)только строковые элементы (string)');	
 var n = prompt('Выберете один из вариантов: ');
 switch(n)
 {
   case '1': return arr.filter(function(x){return x > 0;}); break;
   case '2': return arr.filter(function(x){return !isNaN(x);}); break;
   case '3': return arr.filter(function(x){return  isNaN(x);}); break;
   default: alert("Некорректный вариант!");
 }
}

// Вывести все годы с 1980 до текущий. Использовать объект Date
function AllYearsWith1980()
{
	var d = new Date();
	var y = d.getFullYear();
	for (var i = 1980; i <= y; i++)
		document.write(i + ' ');
	
}

//Пользователь вводит логин и пароль. Если логин и пароль совпадают с указанными ниже, то выводится «Добро пожаловать». 
//Если не совпадают – то «Ошибка входа». Используйте объекты (4.4 - 4.6).
function LogPassw(dB)
{
	var user = { logIn: prompt('Введите логин: '), passWord: prompt('Введите пароль')};
	var flag = false;
    for (var x in dB)
	{
     if( x == user.logIn && dB[x] == user.passWord)
	 {
         flag = true;
		 break;
	 }
     else
         flag = false;
	}

	if (flag)
		alert('Добро пожаловать')
	else 
		alert('Ошибка входа');
}





// task 1
var a = parseInt(prompt('Введите первое число: '));
var b = parseInt(prompt('Введите второе число: '));
MaxOfNumb(a,b);

// task 2
alert('Рез-тат: ' + FiltArr([1, 2, 3, -3, 'a', 'qw', 1.2, 7, 'exit']));

// task 3
AllYearsWith1980();

// task 4
LogPassw({"ivan": '1324',
          "dima": '7777',
          "petr": 'Test321'});



