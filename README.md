# Proyecto- Nutritional plan
My proyects goal is to create a nutritional plan to achieve an adequate alimentation and reach personal goals. The program will divide different foods into food groups relying on the science of macronutrients: carbohydrates, proteins and fats; each of them having an specific ammount of calories. According to the weight and size of the user, the program will calculate the appropriate calories to mantain, loose or gain weight. Then the user will set the split of macronutrients they wish, usually being carbohydrates 50%, proteins 30% and fats 20% to calculate the number of portions they may eat on a day.
Finally, the user will choose the ammount of meals they're willing to eat and distribute the portions onto these meals. To increase user experience, the user will be able to introduce their favorite foods and their nutritional value to not only get the appropriate portion size in grams, but also see if it's implementation is healthy or not.

- Classes definition
- User: The person the plan is intended to, a user has a PLAN
  - userPlan: The plan's user with all it's appropriate methods as type Plan (composition)
  - Name: To identify said user
  - Genre: To calculate the ammount of calories the user most it. It's Male or female
  - Weight: To measure appropriate calories
  - Height: TO measure MBI and calories, it is measured in CM
  - Age: TO measure health risk lines
  - Goal: To mantain, gain or loose weight
  - Calories: The maintenance calories
  - Split: The percentage of the split of the three macronutrients
  - Increment: the extreme in which a user may take the gain/loose journet(it's then expressed into a percentage)
  - Bulk: The sufficient calories to gain weight, according to the increment
  - Deficit: the calories to loose weight
  - Plan: The meals the user has on a day. A plan has MEALS (composition)
    - Calories: The calories of said plan
    - Number of meals: The number of meals, normally 5
    - Carbs: The portions of carbohydrates according to the split
    - Proteins: Portions of proteins according to the split
    - Fats: Portions of fats
    - Meals: The meal in one day, like breakfast. It is expressed into an array having just the 3 macros with the portions of each.
      - Name: TO identify meal, breakfast, snack, etc
      - Time: The time the meal is intended too; ex. "morning".
      - EqualMeal: a function used in plan that divides the portions equally into the number of meals.
      - Food: class to divide class, it has:
        - calories, carbs in grams, proteins in grams, fats in grams. According to this values they get divided into three main classess:
      - Carbs: The number of portions of carbs
        - Sugar content: Grams of sugar
        - Type of carb:Slow or fast digestion
        - Fruit or Vegetable: carbs are fruits and vegetables
      - Fats : The number of portions of fats (inherits all attributes from FOOD)
        - Saturated fat: In grams
        - isSaturated: Yes or no    , it then changes the Saturated attribute into Saturated or insaturated
        - fats.Show() displays the nutritional info of the fats
      - Proteins: The number of portions of proteins
      -   - Base: Proteins can be animal or plant based
          - isEnough(): counts if the percentage in grams of protein is enough in comparison with the other attributes.

![UML Diagrama drawio](https://github.com/user-attachments/assets/f112bb39-35e7-4347-a149-4b109b9a0af1)



