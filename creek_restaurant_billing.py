import random
import string
from datetime import datetime

# Reading the menu from the file
with open("menu_items.txt", "r") as fp:
    show = fp.read()
    print(show)

# Getting current date
current_date = datetime.now().date()

# Function to generate a random referral code
def generate_random_code(length=6):
    characters = string.ascii_letters + string.digits
    return ''.join(random.choice(characters) for _ in range(length))

# Function to print the bill
def print_bill(phone_no, items, total_amount, final_amount, received_amount, referral_code_earned):
    print("\n" + "*" * 50)
    print(" " * 18 + "CrEEk Restaurant")
    print("*" * 50)
    print(f"Phone Number: {phone_no}")
    print(f"Transaction Date: {current_date}")
    print("-" * 50)
    print("Items Ordered:")
    for item, price in items:
        print(f"{item:<30} Rs. {price}")
    print("-" * 50)
    print(f"Total Amount: Rs. {total_amount}")
    print(f"Final Amount: Rs. {final_amount}")
    print(f"Received Amount: Rs. {received_amount}")
    print(f"Referral Code Earned: {referral_code_earned}")
    print("*" * 50)
    print("Thank you for visiting CrEEk Restaurant!")
    print("Please visit again!")
    print("*" * 50 + "\n")

# Function to process a customer order
def process_customer():
    # Menu Items
    menu_items = {
        "Coke": 80,
        "Sprite": 89,
        "Wines": 600,
        "Budweiser Beer": 700,
        "Roast Duck": 309,
        "Chicken Alfredo": 278,
        "Chicken Marsala": 338,
        "Mix Vegetable Sides": 450,
        "Mashed Potatoes": 300,
        "Cakes and Pies": 500,
        "Frozen Desserts": 400,
        "Pastries and Sweets": 220,
        "Fruits": 200,
        "Egg Omelets": 60,
        "Pastries": 70,
        "Italian": 800,
        "Indian": 900,
        "Nepali": 850,
        "Russian": 600,
        "French": 600
    }

    # Lists to store valid referral codes and phone numbers
    referral_codes = ["bishal", "gIXO5D", "nwrYWW", "p5qGt6"]
    returning_customers = ["7645911385", "7856432367", "8971742263"]

    # Customer input
    phone_no = input("Enter your phone number: ")
    if len(phone_no) != 10 or not phone_no.isdigit():
        print("Please enter a valid phone number.")
        return

    no_of_items = int(input("Enter the number of items you want to order: "))
    total_amount = 0
    ordered_items = []

    for i in range(no_of_items):
        item_name = input(f"Enter the name of item {i+1}: ").title()
        if item_name in menu_items:
            total_amount += menu_items[item_name]
            ordered_items.append((item_name, f"Rs. {menu_items[item_name]}"))
        else:
            print(f"{item_name} is not available. Please choose another item.")

    print(f"Total amount for your order: Rs. {total_amount}")

    # Discount for ordering more than 3 items
    discount = 0
    if no_of_items > 3:
        discount += total_amount * 0.07
        print(f"7% discount for ordering more than 3 items: Rs. {discount}")

    # Additional 4% discount for returning customers
    if phone_no in returning_customers:
        discount += total_amount * 0.04
        print(f"4% discount for returning customer: Rs. {total_amount * 0.04}")

    final_amount = total_amount - discount
    print(f"Final amount after discounts: Rs. {final_amount}")

    # Payment process
    received_amount = float(input(f"Enter received amount (Rs. {final_amount}): "))
    if received_amount == final_amount:
        print("Payment successful!")
        referral_code_earned = generate_random_code()
        print(f"Referral code earned: {referral_code_earned}")
    else:
        print("Payment amount does not match the final amount.")

    # Print the bill
    print_bill(phone_no, ordered_items, total_amount, final_amount, received_amount, referral_code_earned)

# Main loop to process customers
if __name__ == "__main__":
    while True:
        process_customer()
        cont = input("Would you like to process another customer? (yes/no): ").lower()
        if cont != 'yes':
            print("Thank you for using CrEEk Restaurant Service!")
            break
