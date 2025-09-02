const users = [
    {
        name: "Sophie Hartwell",
        pic: "https://images.unsplash.com/photo-1506744038136-46273834b3fb",
        bio: "Marketing strategist who believes every brand has a story. Collects vintage postcards and has a weakness for lemon tarts.",
    },
    {
        name: "Aiden Cross",
        pic: "https://images.unsplash.com/photo-1503023345310-bd7c1de61c7d",
        bio: "Software engineer by day, indie game developer by night. Loves cold brew coffee, hiking, and debugging code at 3 AM.",
    },
    {
        name: "Lena Marquez",
        pic: "https://images.unsplash.com/photo-1521747116042-5a810fda9664",
        bio: "Aspiring photographer capturing city life in bold colors. Travels light, laughs loud, and never says no to street food.",
    },
    {
        name: "Kai Donovan",
        pic: "https://images.unsplash.com/photo-1498050108023-c5249f4df085",
        bio: "Marine biology student obsessed with deep-sea creatures. Can spend hours surfing, sketching, or reading sci-fi novels.",
    },
    {
        name: "Noah Bennett",
        pic: "https://images.unsplash.com/photo-1500648767791-00dcc994a43e",
        bio: "Startup founder who believes in building meaningful tech. Loves minimalist design and late-night brainstorming sessions.",
    },
    {
        name: "Isla Chen",
        pic: "https://images.unsplash.com/photo-1529626455594-4ff0802cfb7e",
        bio: "UI/UX designer passionate about crafting user-friendly experiences. Drinks way too much matcha.",
    },
    {
        name: "Julian Park",
        pic: "https://images.unsplash.com/photo-1506794778202-cad84cf45f1d",
        bio: "Travel vlogger exploring hidden gems around the world. Always looking for the perfect sunset shot.",
    },
    {
        name: "Maya Kapoor",
        pic: "https://images.unsplash.com/photo-1524504388940-b1c1722653e1",
        bio: "Content creator blending fashion and lifestyle. Loves rooftop cafes and rainy evenings.",
    },
    {
        name: "Ethan Brooks",
        pic: "https://images.unsplash.com/photo-1492562080023-ab3db95bfbce",
        bio: "Fitness coach helping people build strength and confidence. Weekend warrior on mountain trails.",
    },
    {
        name: "Ava Martinez",
        pic: "https://images.unsplash.com/photo-1506794778202-cad84cf45f1d",
        bio: "Graphic illustrator with a love for bold colors and quirky ideas. Keeps a sketchbook everywhere she goes.",
    },
    {
        name: "Lucas Romero",
        pic: "https://images.unsplash.com/photo-1520813792240-56fc4a3765a7",
        bio: "Cinematography student always chasing the perfect frame. Obsessed with old-school film cameras.",
    },
    {
        name: "Zara Thompson",
        pic: "https://images.unsplash.com/photo-1494790108377-be9c29b29330",
        bio: "Freelance writer crafting stories for modern audiences. Bookstore explorer and tea lover.",
    },
    {
        name: "Ryan Carter",
        pic: "https://images.unsplash.com/photo-1527980965255-d3b416303d12",
        bio: "Entrepreneur building eco-friendly startups. Loves fast cars and quiet beaches.",
    },
    {
        name: "Amelia Rivera",
        pic: "https://images.unsplash.com/photo-1524503033411-c9566986fc8f",
        bio: "Healthcare advocate and med student. Enjoys yoga, cooking, and mentoring younger students.",
    },
    {
        name: "Leo Fischer",
        pic: "https://images.unsplash.com/photo-1506084868230-bb9d95c24759",
        bio: "Full-stack developer who loves open-source projects. Weekend gamer and coffee connoisseur.",
    },

    // New extra users below
    {
        name: "Clara Jensen",
        pic: "https://images.unsplash.com/photo-1517841905240-472988babdf9",
        bio: "Bakery owner who experiments with recipes daily. Avid dog lover and early morning runner.",
    },
    {
        name: "Elliot Gray",
        pic: "https://images.unsplash.com/photo-1544005313-94ddf0286df2",
        bio: "Mechanical engineer passionate about renewable energy solutions. Weekend motorcycle traveler.",
    },
    {
        name: "Nina Patel",
        pic: "https://images.unsplash.com/photo-1529626455594-4ff0802cfb7e",
        bio: "Interior designer bringing calm vibes into busy spaces. Loves art museums and chai lattes.",
    },
    {
        name: "Oscar Wright",
        pic: "https://images.unsplash.com/photo-1500648767791-00dcc994a43e",
        bio: "Finance analyst who enjoys playing jazz piano in his free time. Believes spreadsheets can be beautiful.",
    },
    {
        name: "Harper Lewis",
        pic: "https://images.unsplash.com/photo-1527980965255-d3b416303d12",
        bio: "Student journalist covering campus news. Loves storytelling and long walks in autumn.",
    },
    {
        name: "Miles Anderson",
        pic: "https://images.unsplash.com/photo-1503023345310-bd7c1de61c7d",
        bio: "Amateur photographer with a love for hiking trails. Can’t resist a sunrise view.",
    },
    {
        name: "Chloe Simmons",
        pic: "https://images.unsplash.com/photo-1524504388940-b1c1722653e1",
        bio: "Vet tech who fosters kittens. Can name every constellation in the sky.",
    },
    {
        name: "Victor Reyes",
        pic: "https://images.unsplash.com/photo-1492562080023-ab3db95bfbce",
        bio: "Coffee shop manager and part-time DJ. Loves vinyl records and exploring food trucks.",
    },
    {
        name: "Daisy Morgan",
        pic: "https://images.unsplash.com/photo-1494790108377-be9c29b29330",
        bio: "Elementary teacher bringing creativity into the classroom. Loves board games and camping trips.",
    },
    {
        name: "Henry Scott",
        pic: "https://images.unsplash.com/photo-1506744038136-46273834b3fb",
        bio: "Civil engineer fascinated by bridges and tunnels. Loves to travel for architectural photography.",
    },
    {
        name: "Aurora Blake",
        pic: "https://images.unsplash.com/photo-1521747116042-5a810fda9664",
        bio: "Event planner making dream weddings happen. Collects quirky stationery and vintage stamps.",
    },
    {
        name: "Xavier Hughes",
        pic: "https://images.unsplash.com/photo-1506084868230-bb9d95c24759",
        bio: "Musician and sound designer exploring electronic beats. Enjoys city rooftop sessions.",
    },
    {
        name: "Ivy Foster",
        pic: "https://images.unsplash.com/photo-1529626455594-4ff0802cfb7e",
        bio: "Social worker focused on youth programs. Loves gardening on weekends.",
    },
    {
        name: "Patrick O'Neal",
        pic: "https://images.unsplash.com/photo-1500648767791-00dcc994a43e",
        bio: "Chef traveling the world to learn new cuisines. Lives for fresh ingredients and food markets.",
    },
    {
        name: "Sienna Brooks",
        pic: "https://images.unsplash.com/photo-1524503033411-c9566986fc8f",
        bio: "Professional dancer touring with a global troupe. Big fan of 80s music and beach sunsets.",
    }
];

const cardsContainer = document.querySelector(".cards");
const inp = document.querySelector(".inp");

// Render all users
function showUsers(arr) {
    cardsContainer.innerHTML = ""; // clear container in one go

    for (const user of arr) {
        // Main card
        const card = document.createElement("div");
        card.classList.add("card");

        // Background image
        const img = document.createElement("img");
        img.src = user.pic;
        img.classList.add("bg-img");
        img.loading = "lazy";

        // Blurred layer
        const blurredLayer = document.createElement("div");
        blurredLayer.style.backgroundImage = `url(${user.pic})`;
        blurredLayer.classList.add("blurred-layer");

        // Content section
        const content = document.createElement("div");
        content.classList.add("content");

        const heading = document.createElement("h3");
        heading.textContent = user.name;

        const para = document.createElement("p");
        para.textContent = user.bio;

        content.appendChild(heading);
        content.appendChild(para);

        card.appendChild(img);
        card.appendChild(blurredLayer);
        card.appendChild(content);

        cardsContainer.appendChild(card);
    }
}

// Show all users initially
showUsers(users);

// Case-insensitive filtering
inp.addEventListener("input", () => {
    const q = inp.value.trim().toLowerCase();
    const filtered = users.filter(user =>
        user.name.toLowerCase().startsWith(q)
    );
    showUsers(filtered);
});
