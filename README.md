# Proyecto- Nutritional plan
My proyects goal is to create a nutritional plan to achieve an adequate alimentation and reach personal goals. The program will divide different foods into food groups relying on the science of macronutrients: carbohydrates, proteins and fats; each of them having an specific ammount of calories. According to the weight and size of the user, the program will calculate the appropriate calories to mantain, loose or gain weight. Then the user will set the split of macronutrients they wish, usually being carbohydrates 50%, proteins 30% and fats 20% to calculate the number of portions they may eat on a day.
Finally, the user will choose the ammount of meals they're willing to eat and distribute the portions onto these meals. To increase user experience, the user will be able to introduce their favorite foods and their nutritional value to not only get the appropriate portion size in grams, but also see if it's implementation is healthy or not.

Classes definition
User: The person the plan is intended to
  Name: To identify said user
  Weight: To measure appropriate calories
  Height: TO measure MBI and calories
  Age: TO measure health risk lines
  Goal: To mantain, gain or loose weight
  Calories: The calories to reach the goal
  Split: The percentage of the split of the three macronutrients
  Plan: The meals the user has on a day
    Calories: The calories of said plan
    Number of meals: The number of meals, normally 5
    Carbs: The portions of carbohydrates according to the split
    Proteins-: Portions of proteins according to the split
    Fats: Portions of fats
    Meals: The meal in one day, like breakfast
      Name: TO identify meal, breakfast, snack, etc
      Time: The time the meal is intended too; ex. "morning".
      Carbs: The number of portions of carbs
        Sugar content: Grams of sugar
        Type of carb:Slow or fast digestion
        Fruit or Vegetable: carbs are fruits and vegetables
      Fats : The number of portions of fats
        Saturated fat: In grams
        isSaturated: Yes or no
      Proteins: The number of portions of proteins
        Base: Proteins can be animal or plant based
