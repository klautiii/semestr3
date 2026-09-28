#pragma once

#include "Exercise.h"
#include <string>

namespace miit::algebra {

    /**
     * @brief Задание 1: Заменить отрицательный элемент каждого столбца нулем
     */
    class Task1 : public Exercise {
    private:
        /**
         * @brief Находит индекс первого отрицательного элемента в столбце
         * @param col индекс столбца
         * @return индекс строки с отрицательным элементом или количество строк,
         *         если отрицательных элементов в столбце нет
         */
        size_t findFirstNegativeInColumn(const size_t col) const;

    public:
        Task1() = default;

        /**
         * @brief Выполняет задание: заменяет отрицательный элемент каждого столбца нулем
         */
        void solve() override;

        /**
         * @brief Возвращает описание задания
         * @return описание задания
         */
        std::string getDescription() const override;
    };

} // namespace miit::algebra