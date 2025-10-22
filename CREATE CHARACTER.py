


def create_character(name, strength, intelligence, charisma):
    # Name validation
    if not isinstance(name, str):
        return "The character name should be a string."
    if len(name) > 10:
        return "The character name is too long."
    if " " in name:
        return "The character name should not contain spaces."

    # Stats validation
    stats = [strength, intelligence, charisma]
    if not all(isinstance(stat, int) for stat in stats):
        return "All stats should be integers."
    if min(stats) < 1:
        return "All stats should be no less than 1."
    if max(stats) > 4:
        return "All stats should be no more than 4."


    # Build result
    def stat_line(label, value):
        return f"{label} {'●' * value}{'○' * (10 - value)}"

    return f"{name}\n{stat_line('STR', strength)}\n{stat_line('INT', intelligence)}\n{stat_line('CHA', charisma)}"

print(create_character("hamza", 3, 3, 3))