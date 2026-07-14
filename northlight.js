document.querySelector(".menu").addEventListener("click",()=>{
    document.querySelector(".container").classList.toggle("change");

})
const links=document.querySelectorAll(".menu-link");
links.forEach(link=>{
    link.addEventListener("click",()=>{
        document.querySelector(".container").classList.remove("change");
    });
});