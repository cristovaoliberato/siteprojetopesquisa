const downloadBtn = document.getElementById('downloadBtn');
downloadBtn.addEventListener('click', () => {
    const pdfLink = document.createElement('a');
    pdfLink.href = 'ARdroid_Edu.pdf';
    pdfLink.download = 'ARdroid_Edu.pdf';
    pdfLink.click();
});
