SELECT Блюда.Блюдо, Копия.Блюдо, Блюда.Основа
    FROM Блюда, Блюда Копия
    WHERE Блюда.Основа = Копия.Основа
    AND Блюда.Блюдо < Копия.Блюдо;