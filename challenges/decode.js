function mod(n, m) {
    return ((n % m) + m) % m;
}

function cs(text, shift) {
    return text.split('').map(char => {
        if (char >= 'a' && char <= 'z') {
            return String.fromCharCode(mod((char.charCodeAt(0) - 97 + shift), 26) + 97);
        } else if (char >= 'A' && char <= 'Z') {
            return String.fromCharCode(mod((char.charCodeAt(0) - 65 + shift), 26) + 65);
        } else {
            return char;
        }
    }).join('');
}

function dataToDict(raw) {
    const lines = raw.split('\n');
    const result = {};

    lines.forEach(line => {
        const match = line.match(/^(\w+):\s*"(.+)"$/);
        if (match) {
            const key = match[1];
            const value = match[2];
            result[key] = value;
        }
    });
    return result;
}

// model
const text = `
apiKey: "AIzaSyA4pOWYRvVfF3T5i0hfkSAt4o976sL7cfU",
authDomain: "rauss-kahoot.firebaseapp.com",
projectId: "rauss-kahoot",
storageBucket: "rauss-kahoot.firebasestorage.app",
messagingSenderId: "69734063908",
appId: "1:69734063908:web:1084204796f8da6970ddb1",
measurementId: "G-XPLM05NDHG"
`;

const cd = cs(text, -2);
console.log(cd);
const data = dataToDict(cd);

