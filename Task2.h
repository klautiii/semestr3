#pragma once

#include "Exercise.h"
#include <string>

namespace miit::algebra {

    /**
     * @brief Задание 2: Удалить из массива каждый столбец, содержащий элемент, кратный пяти
     */
    class Task2 : public Exercise {
    private:
        /**
         * @brief Проверяет, содержит ли столбец элемент, кратный пяти
         * @param col индекс столбца
         * @return true, если столбец содержит элемент, кратный пяти (включая ноль)
         */
        bool containsMultipleOfFive(const size_t col) const;

    public:
        Task2() = default;

        /**
         * @brief Выполняет задание: удаляет столбцы, содержащие элемент, кратный пяти
         */
        void solve() override;

        /**
         * @brief Возвращает описание задания
         * @return описание задания
         */
        std::string getDescription() const override;
    };

} // namespace miit::algebra