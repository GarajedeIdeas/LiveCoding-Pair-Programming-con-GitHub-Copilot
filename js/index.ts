// the type Person has a name, a surname, a lastname and an age of the person
type Person = {
    name: string;
    surname: string;
    lastname: string;
    age: number;
};

// and returns a string with the name and the surname
function getFullName(person: Person): string {
    return `${person.name} ${person.surname}`;
}

// this method gets the name, surname, lastname and age of the person
function getPerson(): Person {
    return {
        name: 'John',
        surname: 'Doe',
        lastname: 'Doe',
        age: 30
    };
}